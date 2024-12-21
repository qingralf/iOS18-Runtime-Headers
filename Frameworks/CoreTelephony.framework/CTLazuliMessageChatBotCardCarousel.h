/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageChatBotCardCarousel : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliChatBotSuggestedChipList * _chipList;
    NSArray * _content;
    CTLazuliMessageChatBotCardCarouselLayout * _layout;
}

@property (nonatomic, retain) CTLazuliChatBotSuggestedChipList *chipList;
@property (nonatomic, retain) NSArray *content;
@property (nonatomic, retain) CTLazuliMessageChatBotCardCarouselLayout *layout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chipList;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageChatBotCardCarousel:(id)arg1;
- (id)layout;
- (void)setChipList:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setLayout:(id)arg1;

@end