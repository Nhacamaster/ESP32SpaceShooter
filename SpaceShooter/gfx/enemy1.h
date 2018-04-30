const int enemy1Offsets[] = {0, 486, 1080, 1680, 2226, 2702, 3300, 3900, 4494, };
const short enemy1PointOffsets[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, };
const unsigned short enemy1Res[][2] = {{18, 27}, {22, 27}, {24, 25}, {26, 21}, {28, 17}, {26, 23}, {24, 25}, {22, 27}, };
const signed short enemy1Points[][2] = {{9, 13}, {11, 13}, {12, 12}, {13, 10}, {14, 8}, {13, 11}, {12, 12}, {11, 13}, };
const unsigned short enemy1Pixels[] = {
0, 0, 0, 0, 0, 0, 10375, 22663, 39047, 38774, 26213, 9829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10102, 30855, 59784, 63896, 63896, 64170, 63624, 54885, 30309, 9829, 0, 0, 0, 0, 0, 0, 0, 18277, 55415, 63623, 63350, 63350, 63623, 64170, 63607, 62804, 63061, 54885, 22116, 0, 0, 0, 0, 0, 10085, 54869, 63061, 62804, 62532, 62533, 62804, 62806, 62534, 62788, 62788, 62788, 58708, 17748, 0, 0, 0, 9556, 50244, 62532, 62260, 62262, 53800, 57898, 62805, 62533, 57626, 53801, 62262, 62260, 62532, 46148, 4915, 0, 5, 29492, 41780, 33316, 21029, 16664, 4109, 25942, 63060, 62787, 25397, 4108, 12296, 24582, 37412, 49972, 29748, 819, 0, 4100, 0, 0, 0, 0, 0, 38228, 63060, 62804, 37955, 0, 0, 0, 0, 8, 1363, 0, 0, 0, 0, 0, 0, 0, 0, 42324, 62804, 62804, 46147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13925, 58964, 63350, 63061, 54339, 9556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22117, 55158, 63350, 63896, 63333, 63077, 54885, 22100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18021, 58981, 63076, 62528, 62256, 62261, 62528, 62804, 58708, 21828, 0, 0, 0, 0, 0, 0, 0, 0, 42597, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 46403, 0, 0, 0, 0, 0, 0, 0, 9556, 58964, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 58435, 4642, 0, 0, 0, 0, 0, 0, 13652, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 12834, 0, 0, 0, 0, 0, 0, 9267, 58692, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 58162, 4096, 0, 0, 0, 0, 0, 0, 0, 46131, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 45601, 0, 0, 0, 0, 0, 0, 0, 0, 16929, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 57616, 16384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20753, 53248, 62242, 62804, 63334, 62531, 53248, 24576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12288, 58435, 62788, 62531, 53793, 8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1365, 50499, 62804, 62804, 41506, 0, 0, 0, 0, 0, 0, 0, 0, 2730, 0, 0, 0, 0, 0, 38211, 62804, 62788, 37409, 0, 0, 0, 0, 0, 6263, 0, 2457, 31128, 47240, 39031, 26488, 14185, 5997, 17477, 62804, 62531, 25398, 6557, 14458, 22648, 39031, 46967, 34662, 4095, 0, 6552, 47239, 63351, 63607, 63353, 59258, 51051, 62806, 62805, 59259, 59531, 63609, 63624, 63607, 50789, 9010, 0, 0, 0, 12288, 58436, 62804, 63061, 63077, 63079, 63061, 62805, 63335, 63351, 63350, 63078, 54613, 12289, 0, 0, 0, 0, 0, 21282, 54050, 62259, 62531, 62804, 62531, 62531, 62787, 62531, 61986, 53248, 20480, 0, 0, 0, 0, 0, 0, 0, 9010, 29490, 54066, 62258, 62515, 62531, 61986, 53521, 32768, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9010, 25122, 33314, 33314, 20753, 4369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2184, 6006, 6005, 5989, 2180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18293, 42870, 51062, 55158, 59254, 59237, 50789, 22117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13652, 42324, 58708, 62805, 63077, 63077, 63077, 63077, 63333, 58981, 42580, 5732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9012, 41780, 58164, 62260, 62261, 62533, 62533, 62805, 63077, 63334, 63334, 63060, 42324, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4100, 12293, 24855, 37417, 49434, 62537, 63078, 62532, 62803, 62804, 63060, 26196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13655, 59238, 62804, 57895, 62520, 62788, 62804, 58708, 13635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5973, 42597, 63334, 62787, 25126, 37146, 58167, 62532, 62532, 25668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30309, 63333, 63077, 58435, 4096, 0, 20759, 49973, 62532, 42052, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9829, 22389, 42853, 63333, 63077, 62804, 54066, 4096, 0, 0, 4101, 29492, 54068, 9283, 0, 0, 0, 0, 0, 0, 0, 22373, 55158, 63606, 63334, 63350, 63334, 62804, 49970, 0, 0, 0, 0, 0, 13092, 9283, 0, 0, 0, 0, 0, 0, 18021, 58981, 63077, 62528, 62256, 62261, 62528, 62804, 58708, 21844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42597, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 46404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9556, 58964, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 58435, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13652, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9267, 58692, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 58162, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45875, 62531, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 45601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16384, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 57616, 16384, 0, 0, 0, 0, 0, 0, 6280, 14182, 0, 0, 0, 0, 0, 46420, 62531, 62531, 62788, 63078, 62531, 53248, 24576, 0, 0, 0, 0, 0, 0, 0, 10102, 55159, 30583, 5462, 0, 0, 5460, 54868, 62804, 62531, 57617, 36864, 24576, 8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46694, 63351, 51047, 22120, 0, 5456, 58964, 62804, 62515, 33041, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25668, 62805, 63334, 58985, 38507, 30296, 63060, 62531, 45602, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9282, 54339, 62804, 63077, 63081, 58985, 62804, 58163, 12563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25651, 62531, 62804, 63060, 63078, 62804, 62809, 46955, 38506, 26216, 13927, 6007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5187, 42051, 62531, 62531, 62788, 62804, 63062, 63078, 63079, 63078, 63078, 58981, 34405, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5187, 41778, 58419, 62531, 62531, 62531, 62531, 62788, 62804, 62788, 42052, 13379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21298, 49970, 57890, 57889, 53521, 53248, 40960, 16384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4369, 4642, 4096, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2184, 6245, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5188, 38212, 46420, 50773, 54885, 54885, 38501, 22117, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13108, 42052, 62532, 62788, 62804, 63077, 63077, 54885, 22117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4101, 33589, 58166, 62533, 62804, 63060, 63060, 58964, 25940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21033, 53801, 62264, 63061, 63061, 63060, 58708, 17748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13369, 55161, 63624, 63077, 62804, 62804, 38228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22389, 51335, 63623, 62805, 62263, 62788, 62804, 54612, 5443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9828, 22390, 43126, 38757, 30309, 42853, 63623, 63607, 62804, 45602, 45882, 62535, 62803, 62804, 17748, 0, 0, 0, 0, 0, 0, 0, 0, 22373, 55158, 63607, 63350, 63077, 63077, 63333, 63350, 62804, 58162, 12288, 13115, 58440, 62788, 62788, 33859, 0, 0, 0, 0, 0, 0, 0, 18021, 58981, 63077, 62528, 62256, 62261, 62528, 62804, 62804, 62259, 32768, 0, 0, 25399, 62533, 62532, 25395, 0, 0, 0, 0, 0, 0, 0, 42597, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 54323, 4096, 0, 0, 4919, 42037, 62532, 21298, 0, 0, 0, 0, 0, 0, 9556, 58964, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 54339, 5171, 0, 0, 0, 4917, 50244, 13363, 5733, 18005, 0, 0, 0, 0, 13652, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 12834, 0, 0, 0, 0, 17476, 5188, 18005, 54885, 9558, 0, 0, 0, 4914, 58435, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 58162, 4096, 0, 0, 0, 0, 0, 0, 21844, 63077, 42598, 5463, 0, 0, 9829, 58692, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 45601, 0, 0, 0, 0, 0, 0, 0, 25940, 62805, 63078, 21848, 0, 0, 30309, 63077, 62804, 62787, 63331, 63624, 64442, 64168, 63350, 57616, 16384, 0, 0, 0, 0, 0, 0, 0, 30036, 62804, 63061, 58712, 17755, 9824, 58981, 63077, 62804, 61986, 61986, 62532, 63078, 62531, 53248, 24576, 0, 0, 0, 0, 0, 0, 0, 0, 21827, 62788, 62804, 63063, 46427, 42598, 63077, 62804, 62258, 41233, 28672, 36864, 36864, 24576, 8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5444, 54596, 62804, 63061, 63080, 63077, 62787, 49953, 20480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38212, 62788, 62804, 63077, 62788, 58167, 17464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13379, 58435, 62531, 62804, 62805, 63065, 54890, 22106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25667, 58435, 62531, 62787, 62804, 63062, 58967, 34391, 5735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21298, 54066, 62258, 62515, 62788, 63061, 63061, 42581, 13909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4641, 21026, 37409, 53793, 54067, 50244, 46420, 34133, 5461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4369, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2056, 25941, 26197, 9829, 2180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21572, 62805, 58709, 50789, 22116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42053, 62805, 62804, 58964, 42580, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9271, 54343, 62805, 62804, 63060, 42580, 5716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29753, 62536, 62804, 62804, 62804, 25940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9828, 22390, 43126, 38757, 26213, 9812, 0, 0, 0, 4109, 46154, 62807, 63060, 62804, 58708, 13652, 0, 0, 21845, 13653, 0, 0, 0, 0, 0, 22373, 55158, 63607, 63350, 63077, 63077, 54868, 22100, 22389, 38774, 42870, 59511, 63351, 63077, 62804, 62804, 25924, 0, 5732, 50517, 25925, 0, 0, 0, 0, 18021, 58981, 63077, 62528, 62256, 62261, 62528, 62804, 63077, 63607, 63623, 63350, 63077, 62533, 62534, 62803, 62804, 33859, 0, 26197, 62805, 38213, 0, 0, 0, 0, 42596, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 63077, 63061, 62531, 49953, 41512, 62793, 62803, 62531, 25667, 9828, 54869, 63061, 46406, 0, 0, 0, 9283, 58708, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62786, 62531, 62242, 41233, 8192, 13644, 62792, 62804, 62532, 25667, 21844, 62804, 62804, 58695, 5193, 0, 0, 30309, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62258, 28672, 0, 0, 5194, 58695, 62804, 62532, 21571, 25940, 62804, 62804, 62792, 13116, 6000, 38757, 63350, 63077, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 58162, 4642, 0, 0, 1370, 50502, 62804, 54067, 4913, 30292, 62804, 63060, 62808, 46426, 51045, 63350, 63077, 62804, 62531, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 45601, 0, 0, 0, 0, 38213, 62788, 25379, 0, 30036, 62804, 63077, 63079, 63351, 63334, 63077, 62531, 62258, 61986, 62531, 63331, 63624, 64442, 64168, 63350, 57616, 16640, 0, 0, 0, 0, 21845, 54340, 4096, 0, 25940, 62804, 62804, 63060, 62533, 57892, 37408, 33041, 20480, 20736, 53793, 62258, 62532, 63078, 62531, 53248, 24576, 0, 0, 0, 0, 0, 5460, 17732, 0, 0, 13635, 58691, 62804, 62804, 62791, 46154, 5981, 0, 0, 0, 8192, 24848, 36864, 36864, 24576, 8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29763, 62531, 62804, 62804, 62809, 25946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4915, 41779, 62531, 62803, 62805, 58711, 13655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4914, 33586, 58419, 62788, 62805, 42325, 1638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21025, 49698, 58436, 62804, 25941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8192, 25667, 25924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5461, 9012, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9813, 5733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9812, 46404, 21300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18005, 42581, 9829, 0, 0, 0, 0, 0, 0, 0, 18277, 50789, 62788, 13109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9557, 63061, 54869, 22100, 0, 0, 0, 0, 0, 18021, 58965, 62805, 54341, 4645, 0, 0, 0, 0, 9828, 22390, 43126, 38757, 26213, 9829, 0, 0, 0, 0, 9558, 58710, 63061, 58708, 17748, 0, 0, 0, 0, 42597, 63060, 62804, 50246, 0, 0, 0, 0, 22373, 55158, 63607, 63350, 63077, 63077, 54885, 22100, 0, 0, 0, 1370, 50519, 62805, 62804, 46420, 1092, 0, 0, 22117, 63061, 62804, 62805, 37689, 0, 0, 0, 18005, 58981, 63077, 62528, 62256, 62261, 62528, 62804, 58708, 21571, 0, 0, 0, 38233, 62806, 62804, 62804, 17748, 0, 0, 42596, 63061, 62804, 62536, 25131, 5984, 9829, 22373, 50789, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 54612, 26213, 13925, 5984, 25931, 62809, 62804, 62804, 42324, 0, 5732, 54868, 62804, 63077, 63080, 55160, 59254, 59511, 63607, 63333, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 62804, 63333, 63333, 55141, 50791, 63064, 63077, 62804, 58692, 5443, 5460, 54612, 62804, 63077, 63607, 63623, 63607, 63350, 63350, 63061, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 63060, 63060, 63060, 63060, 63061, 62804, 62788, 58435, 9011, 5188, 58708, 62804, 62788, 62264, 57622, 53792, 62258, 62258, 62531, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 62258, 62259, 62258, 54065, 53798, 62536, 62804, 62804, 54339, 4914, 0, 46404, 62804, 62804, 62536, 25403, 4096, 12288, 24576, 49970, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 49152, 20480, 12288, 4096, 30027, 62809, 62804, 62531, 37683, 0, 0, 17475, 62787, 62804, 62790, 37961, 0, 0, 0, 16929, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 57600, 16384, 0, 0, 0, 42586, 62807, 62804, 62259, 21298, 0, 0, 0, 46147, 62804, 62788, 46151, 0, 0, 0, 0, 20753, 53793, 62258, 62532, 63078, 62531, 53248, 24576, 0, 0, 0, 0, 46424, 62805, 62531, 41778, 1092, 0, 0, 0, 17475, 58435, 62532, 58437, 5174, 0, 0, 0, 0, 8465, 24848, 36864, 36864, 24576, 8192, 0, 0, 0, 0, 5463, 58710, 62804, 58146, 16930, 0, 0, 0, 0, 0, 21025, 54067, 62532, 13381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9814, 62805, 54340, 16385, 0, 0, 0, 0, 0, 0, 0, 9011, 46404, 25668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21845, 46420, 8737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5460, 9284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5461, 5187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10102, 26197, 33860, 5172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22390, 42853, 58964, 62532, 21300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6005, 38758, 63077, 62804, 62532, 41765, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6005, 38757, 63077, 62804, 62788, 54070, 8198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30309, 63077, 63060, 62804, 62264, 24857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9812, 58981, 63060, 62804, 62536, 45066, 15, 0, 0, 0, 9812, 22390, 43126, 38757, 26213, 9829, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 26196, 63077, 63077, 63077, 63352, 55159, 38773, 38757, 26213, 26213, 55141, 63607, 63350, 63077, 63077, 54885, 22100, 0, 0, 0, 0, 0, 10086, 22118, 0, 0, 38228, 63060, 62804, 62533, 62789, 63077, 63350, 63350, 63350, 63333, 63076, 62528, 62256, 62261, 62528, 62804, 58708, 21828, 0, 0, 0, 0, 26214, 51046, 5443, 0, 30036, 62804, 62804, 62264, 49433, 49953, 62531, 63061, 63350, 63350, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 46403, 0, 0, 0, 0, 38502, 63334, 25940, 0, 25940, 62804, 62804, 62264, 16939, 4096, 41233, 58162, 62804, 62802, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 54323, 4096, 0, 0, 0, 42599, 63334, 54612, 9539, 21844, 62804, 62532, 54071, 4649, 0, 0, 21026, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 21828, 0, 0, 9562, 58984, 63077, 62788, 21571, 9283, 54339, 62532, 49973, 0, 0, 0, 5444, 58708, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 62788, 58981, 42596, 5712, 18011, 63081, 63060, 62531, 25667, 0, 29763, 62532, 41781, 0, 0, 0, 0, 46131, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 62531, 63060, 63060, 50788, 42585, 63081, 62804, 62531, 25667, 0, 4914, 50244, 21300, 0, 0, 0, 0, 16929, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 61713, 62258, 62531, 62788, 62804, 63061, 63079, 63060, 62531, 33859, 0, 0, 21572, 9268, 0, 0, 0, 0, 0, 20753, 53793, 62258, 62532, 63078, 62532, 53248, 28672, 24576, 37393, 45600, 58164, 62533, 62804, 62531, 62531, 21571, 0, 0, 548, 548, 0, 0, 0, 0, 0, 0, 8465, 24848, 36864, 36864, 24576, 8465, 0, 0, 0, 5723, 46427, 62808, 62804, 62531, 54323, 5170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26218, 63081, 62804, 62787, 62258, 33314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9832, 54887, 63061, 62788, 62242, 41505, 4898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42598, 63061, 62788, 62243, 33313, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22118, 63061, 54340, 41506, 20752, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5460, 26197, 21844, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6279, 5733, 4095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10632, 22920, 43399, 55431, 55141, 50516, 46404, 33860, 4644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22390, 55431, 63623, 63350, 63060, 62788, 62516, 49972, 13092, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30582, 63623, 63350, 63077, 62803, 62533, 58166, 33318, 4101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18004, 59254, 64153, 63623, 62804, 62264, 49433, 20505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42596, 63350, 63623, 63078, 62805, 58440, 13113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9812, 58980, 63060, 62804, 62263, 62788, 63077, 50789, 22116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22117, 63077, 62804, 62263, 45066, 45876, 62804, 63061, 58981, 42597, 26469, 42870, 38757, 26213, 9829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30292, 62804, 62516, 57895, 12299, 12832, 58163, 62804, 63077, 63623, 63350, 63350, 63077, 63077, 54885, 22100, 0, 0, 0, 0, 0, 0, 0, 0, 25940, 62532, 62261, 24855, 0, 0, 29490, 62531, 63077, 63349, 62528, 62256, 62261, 62528, 62804, 58708, 21828, 0, 0, 0, 0, 0, 0, 0, 17476, 62532, 41764, 6, 0, 0, 4641, 54612, 63060, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 46403, 0, 0, 0, 0, 0, 0, 0, 17475, 54068, 8196, 0, 0, 0, 9828, 58964, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 58435, 4642, 0, 0, 0, 0, 0, 0, 9011, 17204, 0, 0, 0, 0, 13652, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 12834, 0, 0, 0, 0, 14744, 6553, 0, 0, 0, 0, 0, 0, 9267, 58692, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 57889, 4096, 0, 0, 0, 5462, 51336, 14198, 0, 0, 0, 0, 0, 0, 0, 46131, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 58162, 5187, 0, 0, 0, 38775, 63624, 17749, 0, 0, 0, 0, 0, 0, 0, 16929, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 62259, 62804, 25940, 0, 0, 22120, 63624, 63623, 25394, 0, 0, 0, 0, 0, 0, 0, 0, 20753, 53793, 62258, 62532, 63078, 62531, 61969, 62531, 62804, 58708, 17744, 13932, 55161, 63624, 63061, 33313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8465, 24848, 36864, 36864, 24576, 41489, 58419, 62787, 62804, 46421, 50795, 63609, 63077, 62258, 21298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20480, 49970, 62531, 62804, 63336, 63077, 62531, 54066, 4914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17754, 58440, 62532, 62804, 62787, 62515, 41778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18298, 55163, 63337, 62804, 62531, 62531, 58162, 13106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6008, 38775, 59240, 63078, 62804, 62787, 62515, 62258, 33314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13926, 46950, 63078, 62804, 62531, 62258, 61986, 53793, 20753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1636, 30309, 50517, 50243, 57617, 53248, 41233, 20753, 4369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4096, 4369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6552, 6263, 6006, 2645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22647, 43416, 59800, 59527, 55158, 51062, 42870, 18021, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5733, 38757, 64153, 64443, 64426, 63350, 63061, 62805, 62805, 58692, 42052, 13652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38758, 63350, 64170, 64442, 63623, 62788, 62533, 62533, 62517, 62260, 58164, 33844, 5188, 0, 0, 0, 0, 0, 0, 0, 0, 30582, 63333, 63060, 62804, 62806, 62804, 62264, 53530, 41241, 20759, 16389, 4100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9829, 58982, 63061, 62532, 62264, 58152, 62804, 62805, 17463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26196, 62804, 62260, 57895, 37146, 21303, 62803, 62804, 42324, 5460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42324, 62260, 45605, 16664, 0, 9280, 58708, 62804, 62804, 25940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9284, 54324, 33316, 4102, 0, 0, 9539, 58691, 62804, 63061, 58981, 38757, 26213, 9829, 0, 0, 0, 0, 0, 0, 0, 0, 9011, 13091, 0, 0, 0, 0, 0, 50516, 63350, 63623, 63077, 63077, 63077, 54885, 22100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18021, 58981, 63350, 62800, 62256, 62261, 62528, 62804, 58708, 21828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42597, 63061, 62528, 62255, 62255, 62239, 62271, 62784, 62804, 46403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9556, 58964, 62786, 62523, 62239, 62223, 62223, 62239, 62796, 62802, 58435, 4642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13652, 62804, 62784, 62527, 61967, 62223, 62223, 61967, 62799, 62802, 62531, 12834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9267, 58692, 62801, 62797, 62239, 61967, 61967, 62239, 63082, 62803, 58162, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46131, 62787, 62800, 62815, 62255, 62799, 63359, 63622, 62531, 45601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16929, 58162, 62531, 63331, 63624, 64442, 64168, 63350, 57344, 16384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20753, 53793, 62258, 62532, 63078, 62532, 62258, 49697, 0, 0, 0, 0, 0, 14472, 10375, 0, 0, 0, 0, 0, 0, 0, 0, 8465, 24576, 36864, 57889, 62531, 62804, 58435, 5170, 0, 0, 6264, 30856, 51336, 6280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29474, 62531, 62804, 62787, 13104, 0, 22393, 51336, 63896, 43143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4642, 41779, 62804, 62787, 30023, 34683, 63626, 64170, 63896, 21572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17479, 58436, 62803, 63081, 63883, 63897, 63607, 54067, 4096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6280, 10376, 22666, 43147, 55436, 63337, 62804, 63061, 63077, 62787, 61985, 33041, 0, 0, 0, 0, 0, 0, 0, 0, 6263, 38775, 59511, 59511, 63607, 63351, 63078, 63078, 62804, 62531, 62531, 62258, 33313, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13925, 42581, 62805, 62805, 62788, 62788, 62531, 62531, 62531, 62258, 41505, 4641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16384, 41233, 53521, 53793, 57889, 53793, 41506, 20753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4641, 4881, 4641, 4642, 0, 0, 0, 0, 0, 0, 0, };
Sprites enemy1(8, enemy1Pixels, enemy1Offsets, enemy1Res, enemy1Points, enemy1PointOffsets);