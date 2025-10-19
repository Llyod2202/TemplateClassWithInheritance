/* Leah Cochrum-Helbach
 * RedID: 828316587
 * 10/17/25
 */

/* Create an IntPair object and print the sum
 * Explain how template inheritance works in this example
 *      --> we're using the template for class Pair to show the object we created
 *          and we're using inheritance for the class IntPair to get the object
 *          and then create the sum
 */

#include <iostream>

using namespace std;

template <typename T>
class Pair {
public:
    T first, second;
    Pair(T a, T b) : first(a), second(b) {}
    void show() {
        cout << first << ", " << second << endl;
    }
};

class IntPair : public Pair<int> {
public:
    IntPair(int a, int b) : Pair<int>(a, b) {}
    int sum() {
        return first + second;
    }
};

int main() {
    int firstOfPair = 34;
    int secondOfPair = 33;

    IntPair p(firstOfPair, secondOfPair);

    p.show();

    cout << "Total Sum: " << p.sum() << endl;

    return 0;
}