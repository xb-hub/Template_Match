#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

namespace number_detector
{
class NumberDetector
{
private:
    string test_path;         // test数据集路径
    string template_path;     // template文件路径
    int ans_label;            // 识别结果
    int th;
public:
    NumberDetector(/* args */);
    ~NumberDetector();

    void detector();
};
    
} // namespace number_detector