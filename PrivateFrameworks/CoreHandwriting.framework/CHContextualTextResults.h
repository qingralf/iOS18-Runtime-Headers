/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHContextualTextResults : NSObject {
    NSArray * _textResults;
}

@property (nonatomic, retain) NSArray *textResults;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)enumerateGroupsCoveredByStringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 block:(id /* block */)arg2;
- (id)initWithTextResults:(id)arg1;
- (bool)isMathForContextLookup;
- (id)rawTranscription;
- (void)setTextResults:(id)arg1;
- (id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 intersectionRanges:(id*)arg2;
- (id)textResults;
- (id)topTranscription;

@end
