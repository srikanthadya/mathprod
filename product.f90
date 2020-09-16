subroutine product(a,b,prod)  bind(c, name="testprod")
 
        integer a,b
    
        integer prod
 
        prod=a*b
        return
end 
