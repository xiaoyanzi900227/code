import std;
int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1,100);
    int n=dist(gen);
    std::println("猜1~100的数字");
    int a;
    int q{10};
    for (int i{0};i<10;++i){
        std::print("请输入数字：");
        std::cin>>a;
        q--;
        if (a>n){
            std::println("猜大了，还有{}次机会。",q);
        } else if (a<n){
            std::println("猜小了，还有{}次机会。",q);
        } else{
            std::println("猜对了，还有{}次机会。",q);
            std::exit(0);
        }
    }
    std::println("次数用完，游戏结束。");
    return 0;
}