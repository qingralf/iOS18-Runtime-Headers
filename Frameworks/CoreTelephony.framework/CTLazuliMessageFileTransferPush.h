/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageFileTransferPush : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliChatBotSuggestedChipList * _chipList;
    CTLazuliFileTransferDescriptor * _descriptor;
    CTLazuliCustomMetaData * _metaData;
}

@property (nonatomic, retain) CTLazuliChatBotSuggestedChipList *chipList;
@property (nonatomic, retain) CTLazuliFileTransferDescriptor *descriptor;
@property (nonatomic, retain) CTLazuliCustomMetaData *metaData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chipList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageFileTransferPush:(id)arg1;
- (id)metaData;
- (void)setChipList:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setMetaData:(id)arg1;

@end
