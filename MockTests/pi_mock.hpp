Class PiMock: public Base {
    public:
        PiMock() { }

        virtual double evaluate() { return 3.14159265; }
        virtual string stringify() { return "3.14159265"; }
}
