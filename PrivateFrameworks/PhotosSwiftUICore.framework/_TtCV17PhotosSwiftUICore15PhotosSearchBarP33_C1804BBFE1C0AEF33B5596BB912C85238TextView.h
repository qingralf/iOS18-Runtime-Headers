/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosSwiftUICore.framework/PhotosSwiftUICore
 */

@interface _TtCV17PhotosSwiftUICore15PhotosSearchBarP33_C1804BBFE1C0AEF33B5596BB912C85238TextView : UITextView <NSLayoutManagerDelegate, NSTextStorageDelegate> {
    void isUpdating;
    void selectedTokenRange;
    void style;
}

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)invalidateTextStorageAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { double x1; double x2; })arg5 characterIndex:(long long)arg6;
- (long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const long long*)arg3 characterIndexes:(const long long*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(long long)arg3;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;

@end