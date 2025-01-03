/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageText : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliChatBotSuggestedChipList * _chipList;
    NSString * _content;
    CTLazuliCustomMetaData * _metaData;
}

@property (nonatomic, retain) CTLazuliChatBotSuggestedChipList *chipList;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, retain) CTLazuliCustomMetaData *metaData;

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
- (bool)isEqualToCTLazuliMessageText:(id)arg1;
- (id)metaData;
- (void)setChipList:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setMetaData:(id)arg1;

@end
