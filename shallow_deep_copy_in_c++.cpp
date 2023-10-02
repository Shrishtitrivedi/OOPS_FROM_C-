/*
class student(){
    int age;
    char *names;
    public:
    student(int age,int * names){
        this->age=age;
        this->names=names;
        //shallow copy
    }
}
class student(){
    int age;
    char * names;
    public:
    student(int age,int *names){
        this->age=age;
        this->names= new char[strlen(names)+1];
        strcpy(this->names,names);
        //deep copy
    }
}
*/
