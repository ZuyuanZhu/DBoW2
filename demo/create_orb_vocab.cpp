// #include <iostream>
// #include <vector>
// #include <opencv2/core.hpp>
// #include <opencv2/highgui.hpp>
// #include <opencv2/imgproc.hpp>

// void loadImages(const std::string &dataset_dir, std::vector<cv::Mat> &images);
// void extractDescriptors(const std::vector<cv::Mat> &images, std::vector<std::vector<cv::Mat>> &descriptors);

// int main(int argc, char **argv) {
//     if (argc != 3) {
//         std::cerr << "Usage: " << argv[0] << " <path_to_dataset> <output_vocabulary_file>" << std::endl;
//         return -1;
//     }

//     std::vector<cv::Mat> images;
//     loadImages(argv[1], images);

//     std::vector<std::vector<cv::Mat>> descriptors;
//     extractDescriptors(images, descriptors);

//     DBoW2::TemplatedVocabulary<cv::Mat, DBoW2::FORB> vocab;
//     vocab.create(descriptors);

//     vocab.save(argv[2]);

//     std::cout << "Vocabulary saved to " << argv[2] << std::endl;

//     return 0;
// }

// void loadImages(const std::string &dataset_dir, std::vector<cv::Mat> &images) {
//     std::vector<cv::String> files;
//     cv::glob(dataset_dir + "/*.png", files, false);

//     for (const auto &file : files) {
//         images.push_back(cv::imread(file, cv::IMREAD_GRAYSCALE));
//     }
// }

// void extractDescriptors(const std::vector<cv::Mat> &images, std::vector<std::vector<cv::Mat>> &descriptors) {
//     cv::Ptr<cv::ORB> orb = cv::ORB::create();

//     for (const auto &image : images) {
//         std::vector<cv::KeyPoint> keypoints;
//         cv::Mat desc;

//         orb->detectAndCompute(image, cv::noArray(), keypoints, desc);

//         std::vector<cv::Mat> descs;
//         for (int i = 0; i < desc.rows; i++) {
//             descs.push_back(desc.row(i));
//         }
//     }
// }
