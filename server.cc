#include <string>

#include <grpcpp/grpcpp.h>
#include "mathtest.grpc.pb.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
 
using namespace std;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using mathtest::MathTest;
using mathtest::MathRequest;
using mathtest::MathReply;

extern "C" void product_(int *a, int *b , int *prod);
class MathServiceImplementation final : public MathTest::Service {
    Status sendRequest(
        ServerContext* context, 
        const MathRequest* request, 
        MathReply* reply
    ) override {
        int a = request->a();
        int b = request->b();
        int prod = 0;
        product_(&a,&b,&prod);
        reply->set_result(prod);

        return Status::OK;
    } 
};

void Run() {
    std::string address("0.0.0.0:5000");
    MathServiceImplementation service;

    ServerBuilder builder;

    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on port: " << address << std::endl;

    server->Wait();
}

int main(int argc, char** argv) {
    Run();

    return 0;
}
