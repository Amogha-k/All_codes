//
#include <iostream>
using namespace std;
class myexecption : exception
{
};
class myexecption1 : public myexecption
{
};
int main()
{
    try
    {
        throw myexecption();
    }
    catch (int e)
    {
        cout << "int catch" << endl;
    }
    catch (double e)
    {
        cout << "double catch" << endl;
    }
    catch (myexecption1 e)
    {
        cout << "myexecption " << endl;
    }
    catch (myexecption e) // write the child function
    {
        cout << "myexecption origin" << endl;
    }
    catch (...) // universal catch
    {
        cout << "any catch catch" << endl;
    }

    return 0;
}
