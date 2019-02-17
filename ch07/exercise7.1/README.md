# 练习7.1

使用2.6.1节练习定义的Sales_data类为1.6节的交易处理程序编写一个新版本。

见源代码`solution7_1/solution7_1.cpp`。

![](res/1.png)

# 练习7.2

曾在2.6.2节练习中编写了一个Sales_data类，请向这个类添加combine和isbn成员。

见源代码`solution7_2/model.cpp`。

# 练习7.3

修改7.1.1节的交易处理程序，令其使用这些成员。

略。

# 练习7.4

编写一个名为Person的类，使其表示人员的姓名和住址。使用string对象存放这些元素，接下来的练习将不断充实这个类的其它特征。

```cpp
struct Person
{
  std::string name;
  std::string address;
};
```

# 练习7.5

在你的Person类中提供一些操作使其能够返回姓名和住址。这些函数是否应该是const的呢？解释原因。

应该是const的，因为是只读的，声明为const成员函数就无法修改该类的数据成员。
