/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPersonalizationCellContext : NSObject {
    long long  _autocapitalizationType;
    bool  _bindTextToStringRepresentation;
    id /* block */  _contactUpdateBlock;
    long long  _keyboardType;
    double  _minimumTextLabelWidth;
    id /* block */  _stringRepresentationBlock;
    NSString * _textContentType;
    NSString * _title;
}

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) bool bindTextToStringRepresentation;
@property (nonatomic, copy) id /* block */ contactUpdateBlock;
@property (nonatomic) long long keyboardType;
@property (nonatomic) double minimumTextLabelWidth;
@property (nonatomic, copy) id /* block */ stringRepresentationBlock;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (long long)autocapitalizationType;
- (bool)bindTextToStringRepresentation;
- (id /* block */)contactUpdateBlock;
- (long long)keyboardType;
- (double)minimumTextLabelWidth;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setBindTextToStringRepresentation:(bool)arg1;
- (void)setContactUpdateBlock:(id /* block */)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMinimumTextLabelWidth:(double)arg1;
- (void)setStringRepresentationBlock:(id /* block */)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTitle:(id)arg1;
- (id /* block */)stringRepresentationBlock;
- (id)textContentType;
- (id)title;

@end