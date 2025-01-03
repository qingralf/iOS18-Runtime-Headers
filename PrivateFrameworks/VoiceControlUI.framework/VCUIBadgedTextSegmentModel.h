/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceControlUI.framework/VoiceControlUI
 */

@interface VCUIBadgedTextSegmentModel : NSObject {
    void displayedRange;
    void isWhiteSpace;
    void label;
    void range;
    void text;
}

@property (nonatomic, readonly) NSAttributedString *displayedText;
@property (nonatomic) bool isWhiteSpace;
@property (nonatomic, retain) NSAttributedString *label;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } nsRange;
@property (nonatomic, readonly) NSAttributedString *representedText;
@property (nonatomic, retain) NSAttributedString *text;

- (void).cxx_destruct;
- (id)displayedText;
- (bool)isWhiteSpace;
- (id)label;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRange;
- (id)representedText;
- (void)setIsWhiteSpace:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
