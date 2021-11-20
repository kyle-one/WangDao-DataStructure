void floyd() {
    // k为中间节点的下标
    for (int k = 0; k < dis.length; k++) {
        // i为开始节点的下标
        for (int i = 0; i < dis.length; i++) {
            // j为结束节点的下标
            for (int j = 0; j < dis.length; j++) {
                // 计算以k为中间节点，i为开始节点，j为结束节点，i->k->j的距离
                int length = dis[i][k] + dis[k][j];
                // 将i->k->j的距离与i->j的距离进行比较
                // 如果i->j的距离大，则更新距离表和前驱节点表
                if (length < dis[i][j]) {
                    dis[i][j] = length;
                    pre[i][j] = pre[i][k];
                }
            }
        }
    }
}

