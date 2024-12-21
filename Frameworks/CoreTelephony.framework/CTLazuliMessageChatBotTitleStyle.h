/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageChatBotTitleStyle : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliMessageChatBotFontStyle * _style;
}

@property (nonatomic, retain) CTLazuliMessageChatBotFontStyle *style;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const struct MessageChatBotTitleStyle { struct MessageChatBotFontStyle { bool x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageChatBotTitleStyle:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end