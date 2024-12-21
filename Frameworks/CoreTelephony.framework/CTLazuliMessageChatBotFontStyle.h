/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageChatBotFontStyle : NSObject <NSCopying, NSSecureCoding> {
    bool  _bold;
    bool  _italics;
    bool  _underline;
}

@property (nonatomic) bool bold;
@property (nonatomic) bool italics;
@property (nonatomic) bool underline;

+ (bool)supportsSecureCoding;

- (bool)bold;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const struct MessageChatBotFontStyle { bool x1; bool x2; bool x3; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageChatBotFontStyle:(id)arg1;
- (bool)italics;
- (void)setBold:(bool)arg1;
- (void)setItalics:(bool)arg1;
- (void)setUnderline:(bool)arg1;
- (bool)underline;

@end