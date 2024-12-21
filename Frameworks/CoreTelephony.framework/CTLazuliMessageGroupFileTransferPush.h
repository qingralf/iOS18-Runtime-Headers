/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageGroupFileTransferPush : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliGroupChatInformation * _chatInformation;
    CTLazuliFileTransferDescriptor * _descriptor;
    CTLazuliCustomMetaData * _metaData;
}

@property (nonatomic, retain) CTLazuliGroupChatInformation *chatInformation;
@property (nonatomic, retain) CTLazuliFileTransferDescriptor *descriptor;
@property (nonatomic, retain) CTLazuliCustomMetaData *metaData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatInformation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageGroupFileTransferPush:(id)arg1;
- (id)metaData;
- (void)setChatInformation:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setMetaData:(id)arg1;

@end