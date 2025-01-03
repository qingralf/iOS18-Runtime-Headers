/* Generated by RuntimeBrowser.
 */

@protocol PKSqueezePaletteViewDelegate <NSObject>

@optional

- (bool)paletteView:(PKSqueezePaletteView *)arg1 canSelectTool:(PKTool *)arg2 atIndex:(unsigned long long)arg3;
- (void)paletteView:(PKSqueezePaletteView *)arg1 didSelectColor:(UIColor *)arg2 isFromExtendedColorPicker:(bool)arg3 isContinuousColorSelection:(bool)arg4;
- (void)paletteView:(PKSqueezePaletteView *)arg1 didSelectStrokeWeight:(double)arg2 forTool:(PKTool *)arg3;
- (void)paletteView:(PKSqueezePaletteView *)arg1 didSelectTool:(PKTool *)arg2 atIndex:(unsigned long long)arg3;
- (bool)paletteViewCanRedo:(PKSqueezePaletteView *)arg1;
- (bool)paletteViewCanUndo:(PKSqueezePaletteView *)arg1;
- (void)paletteViewDidInvokeAddShape:(PKSqueezePaletteView *)arg1 sourceView:(UIView *)arg2;
- (void)paletteViewDidInvokeAddSticker:(PKSqueezePaletteView *)arg1 sourceView:(UIView *)arg2;
- (void)paletteViewDidInvokeAddTextBox:(PKSqueezePaletteView *)arg1 sourceView:(UIView *)arg2;
- (void)paletteViewDidInvokeExtendedColorPicker:(PKSqueezePaletteView *)arg1 currentSelectedColor:(UIColor *)arg2 sourceView:(UIView *)arg3;
- (void)paletteViewDidInvokeMoreOptions:(PKSqueezePaletteView *)arg1 sourceView:(UIView *)arg2;
- (void)paletteViewDidInvokeRedo:(PKSqueezePaletteView *)arg1;
- (void)paletteViewDidInvokeSignature:(PKSqueezePaletteView *)arg1 sourceView:(UIView *)arg2;
- (void)paletteViewDidInvokeUndo:(PKSqueezePaletteView *)arg1;
- (void)paletteViewDidTapRuler:(PKSqueezePaletteView *)arg1;
- (unsigned long long)paletteViewRedoCount:(PKSqueezePaletteView *)arg1;
- (unsigned long long)paletteViewUndoCount:(PKSqueezePaletteView *)arg1;

@end
