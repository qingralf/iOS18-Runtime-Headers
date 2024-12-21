/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliChatBotCard : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliChatBotCardContent * _content;
    CTLazuliChatBotCardLayout * _layout;
}

@property (nonatomic, retain) CTLazuliChatBotCardContent *content;
@property (nonatomic, retain) CTLazuliChatBotCardLayout *layout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliChatBotCard:(id)arg1;
- (id)layout;
- (void)setContent:(id)arg1;
- (void)setLayout:(id)arg1;

@end