/* Generated by RuntimeBrowser.
 */

@protocol CHTransformedText <NSObject>

@required

- (void)addSupportStroke:(id <CHStroke>)arg1;
- (void)addSupportStroke:(id <CHStroke>)arg1 tokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (struct CGPoint { double x1; double x2; })insertionPoint;
- (double)lineHeight;
- (NSLocale *)locale;
- (void)mergeTransformedText:(id <CHTransformedText>)arg1;
- (double)orientation;
- (NSArray *)splitIntoTokens;
- (NSString *)string;
- (long long)strokeClassification;
- (NSArray *)supportStrokeTokenRanges;
- (NSArray *)supportStrokes;
- (NSArray *)textStrokes;
- (NSArray *)tokenDistanceSizes:(bool)arg1;
- (NSArray *)tokens;

@end
