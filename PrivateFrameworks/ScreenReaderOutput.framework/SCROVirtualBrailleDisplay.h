/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROVirtualBrailleDisplay : SCROBrailleDisplay <SCROVirtualBrailleDriverDelegate> {
    NSString * _mainCells;
    long long  _mainSize;
    SCROVirtualBrailleDriver * _virtualDriver;
}

+ (id)systemDisplay;

- (void).cxx_destruct;
- (id)_initWithMainSize:(long long)arg1 ioElement:(id)arg2;
- (void)_simulateKeypressWithMask:(unsigned int)arg1;
- (void)didSetMainCells:(id)arg1;
- (id)initWithMainSize:(long long)arg1;
- (id)mainCells;
- (long long)mainSize;
- (void)pressKeyChord:(unsigned long long)arg1;
- (void)pressNext;
- (void)pressPanLeft;
- (void)pressPanRight;
- (void)pressPrevious;
- (void)pressRouterWithIndex:(unsigned long long)arg1;

@end
