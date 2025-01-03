/* Generated by RuntimeBrowser.
 */

@protocol NTKRichComplicationBezelView <NSObject>

@required

- (double)bezelTextAlpha;
- (double)bezelTextAngularWidth;
- (UIColor *)bezelTextColor;
- (<NTKRichComplicationBezelViewDelegate> *)bezelTextDelegate;
- (double)bezelTextRadius;
- (void)setBezelTextAlpha:(double)arg1;
- (void)setBezelTextColor:(UIColor *)arg1;
- (void)setBezelTextDelegate:(id <NTKRichComplicationBezelViewDelegate>)arg1;
- (void)setBezelTextRadius:(double)arg1;

@optional

- (void)updatePropertiesAsGroupWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTKGroupedBezelProperties *, void*

@end
