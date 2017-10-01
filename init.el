
;;utf-8を使用
(prefer-coding-system 'utf-8)

;;言語を日本語にする
(set-language-environment ' Japanese)

;;括弧をハイライト
(show-paren-mode t)

;;背景変更
(set-face-background ' default"#333333")

;;行番号を表示
(column-number-mode t)

;;列番号を表示
(line-number-mode 1)

;;起動時の画面を表示しない
(setq inhibit-startup-message t)

;;透過度
(set-frame-parameter nil 'alpha 100)

;;カーソル色を設定する
(set-cursor-color "white")

;;文字色の設定
(set-foreground-color "#cccccc")

;;font-lock-mode
(global-font-lock-mode t)
(setq font-lock-support-mode 'jit-lock-mode)



