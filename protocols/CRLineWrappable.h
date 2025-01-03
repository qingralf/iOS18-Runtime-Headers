/* Generated by RuntimeBrowser.
 */

@protocol CRLineWrappable <CRIdentifiable, CRTextRegion>

@required

- (unsigned long long)lineWrappingType;
- (NSLocale *)locale;
- (void)setLineWrappingType:(unsigned long long)arg1;

@optional

- (double)confidenceScore;
- (void)mergeWithLine:(id <CRLineWrappable>)arg1;

@end
