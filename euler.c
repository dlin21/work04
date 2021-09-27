int p1(){
    int i;
    int sum = 0;
    for(i=0; i < 1000; i++){
        if(i%3 == 0 || i%5 ==0){
            sum += i;
        }
    }
    return sum;
}

int p6(){
    int i;
    /*sum of the squares*/
    double a = 0;
    /*square of the sum*/
    double b = 0;
    
    
    for(int i=1; i<=100; i++){
        a += i * i;
        b += i;
    }
    b *= b;

    return (b - a);
}