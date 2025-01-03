/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliMessageGroupGeoLocationPush : NSObject <NSCopying, NSSecureCoding> {
    CTLazuliGroupChatInformation * _chatInformation;
    CTLazuliLocationCoordinates * _coordinates;
    CTLazuliCustomMetaData * _metaData;
}

@property (nonatomic, retain) CTLazuliGroupChatInformation *chatInformation;
@property (nonatomic, retain) CTLazuliLocationCoordinates *coordinates;
@property (nonatomic, retain) CTLazuliCustomMetaData *metaData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatInformation;
- (id)coordinates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliMessageGroupGeoLocationPush:(id)arg1;
- (id)metaData;
- (void)setChatInformation:(id)arg1;
- (void)setCoordinates:(id)arg1;
- (void)setMetaData:(id)arg1;

@end
