// 118. �������
/*class Solution {
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> two_arr(numRows);
        for(size_t i = 0; i < numRows; ++i)
        {
            // ���ռ䲢��ʼ�� ��i�е�һ���͵�i�����һ��ȫ��ʼ����1
            two_arr[i].resize(i + 1, 1);
        }
        for(size_t i = 2; i < numRows; ++i)
        {
            for(size_t j = 1; j < i; ++j)
            {
                two_arr[i][j] = two_arr[i -1][j] + two_arr[i -1][j - 1];
            }           
        }
        return two_arr;
    }
};*/