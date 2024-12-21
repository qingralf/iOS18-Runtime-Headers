/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMutableCaption : AVCaption {
    AVMutableCaptionInternal * _mutableInternal;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (long long)animation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeBackgroundColorInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeDecorationInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeFontStyleInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeFontWeightInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRuby:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRubyInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeTextColorInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeTextCombineInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAnimation:(long long)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDecoration:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFontStyle:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setFontWeight:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setRegion:(id)arg1;
- (void)setRuby:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(struct CGColor { }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTextCombine:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end