/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextFormattingViewControllerFormattingDescriptor : NSObject <NSCopying, NSSecureCoding> {
    long long  __blockquote;
    bool  __canToggleBold;
    bool  __canToggleItalic;
    NSSet * __customComponentKeys;
    NSString * __emphasisStyleKey;
    NSParagraphStyle * __paragraphStyle;
    NSDictionary * _attributes;
    NSArray * _fonts;
    NSString * _formattingStyleKey;
    NSSet * _highlights;
    double  _lineHeight;
    long long  _listStyle;
    long long  _strikethrough;
    bool  _strikethroughPresent;
    NSSet * _textAlignments;
    NSArray * _textColors;
    NSSet * _textLists;
    long long  _underline;
    bool  _underlinePresent;
}

@property (nonatomic) long long _blockquote;
@property (nonatomic) bool _canToggleBold;
@property (nonatomic) bool _canToggleItalic;
@property (nonatomic, copy) NSSet *_customComponentKeys;
@property (nonatomic, copy) NSString *_emphasisStyleKey;
@property (nonatomic, copy) NSParagraphStyle *_paragraphStyle;
@property (nonatomic, copy) NSArray *fonts;
@property (nonatomic, copy) NSString *formattingStyleKey;
@property (nonatomic, copy) NSSet *highlights;
@property (nonatomic) double lineHeight;
@property (nonatomic) long long listStyle;
@property (nonatomic) long long strikethrough;
@property (nonatomic) bool strikethroughPresent;
@property (nonatomic, copy) NSSet *textAlignments;
@property (nonatomic, copy) NSArray *textColors;
@property (nonatomic, copy) NSSet *textLists;
@property (nonatomic) long long underline;
@property (nonatomic) bool underlinePresent;

+ (bool)_canToggleTrait:(unsigned int)arg1 forFont:(id)arg2 inText:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_blockquote;
- (bool)_canToggleBold;
- (bool)_canToggleItalic;
- (id)_customComponentKeys;
- (id)_emphasisStyleKey;
- (id)_paragraphStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fonts;
- (id)formattingStyleKey;
- (unsigned long long)hash;
- (id)highlights;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (double)lineHeight;
- (long long)listStyle;
- (void)setFonts:(id)arg1;
- (void)setFormattingStyleKey:(id)arg1;
- (void)setHighlights:(id)arg1;
- (void)setLineHeight:(double)arg1;
- (void)setListStyle:(long long)arg1;
- (void)setStrikethrough:(long long)arg1;
- (void)setStrikethroughPresent:(bool)arg1;
- (void)setTextAlignments:(id)arg1;
- (void)setTextColors:(id)arg1;
- (void)setTextLists:(id)arg1;
- (void)setUnderline:(long long)arg1;
- (void)setUnderlinePresent:(bool)arg1;
- (void)set_blockquote:(long long)arg1;
- (void)set_canToggleBold:(bool)arg1;
- (void)set_canToggleItalic:(bool)arg1;
- (void)set_customComponentKeys:(id)arg1;
- (void)set_emphasisStyleKey:(id)arg1;
- (void)set_paragraphStyle:(id)arg1;
- (long long)strikethrough;
- (bool)strikethroughPresent;
- (id)textAlignments;
- (id)textColors;
- (id)textLists;
- (long long)underline;
- (bool)underlinePresent;

@end
