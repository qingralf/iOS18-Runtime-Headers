/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface RFMapMarkerIdentifier : NSObject <NSCopying, NSSecureCoding, RFMapMarkerIdentifier> {
    struct { 
        unsigned int isForCameraPositionOnly : 1; 
    }  _has;
    bool  _isForCameraPositionOnly;
    NSString * _muid;
    NSString * _resultProviderID;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForCameraPositionOnly;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *muid;
@property (nonatomic, copy) NSString *resultProviderID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsForCameraPositionOnly;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForCameraPositionOnly;
- (id)jsonData;
- (id)muid;
- (id)resultProviderID;
- (void)setIsForCameraPositionOnly:(bool)arg1;
- (void)setMuid:(id)arg1;
- (void)setResultProviderID:(id)arg1;

@end