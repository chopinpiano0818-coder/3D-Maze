<<<<<<< HEAD
3D MAZE 最終調整版 2026-07-30

今回の最終調整
- ゲームが実際に使用する青ロボットPNGの背景を完全透過
- 透明部分に残っていた色データも削除
- モバイル操作でPC版の主要操作をすべて使用可能
  移動／左右上下視点／走る／しゃがむ／ジャンプ／地図／一時停止／鍵を取る・使う

=======
>>>>>>> 17a6645c54724e00b7ca154237cec6b8dbf0490a
TOWER MAZE 50 修正版 2026-07-29

修正内容
- ロボット画像を透過PNGに変更（白・灰色の市松背景を削除）
- 壁が画面外へはみ出した時のテクスチャ切り取りを修正
- 黒い天井を削除し、青空を表示
- マウス上下で上下視点、PageUp/PageDownでも調整可能
- タッチ入力を検出するとモバイル操作へ自動切り替え
- 鍵・アイテム・ダメージ・プレイヤー足音・敵足音を再生
- ポーズ画面のセーブを拡張
- ホーム画面にロードを追加
- F5でもセーブ可能

必要パッケージ（Raspberry Pi OS）
sudo apt update
sudo apt install -y build-essential cmake pkg-config libsdl2-dev libsdl2-image-dev libsdl2-ttf-dev libsdl2-mixer-dev

実行
chmod +x build_and_run.sh
./build_and_run.sh

注意
- このフォルダの中で実行してください。
- assetsフォルダの位置や名前を変えないでください。
- セーブデータは同じフォルダの maze_save.txt に作られます。

v3 fixes:
- robot_blue_transparent.png was rebuilt with a real alpha channel; checkerboard background pixels are removed.
- Mobile controls now include movement, running, crouching, jumping, map, pause, interaction/key pickup/goal activation, and right-side swipe camera look including vertical look.
