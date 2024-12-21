/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying> {
    CKOperationConfiguration * _operationConfiguration;
    NSArray * _vouchers;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, retain) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSArray *vouchers;

- (bool)allowsCellularAccess;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createDefaultOperationConfiguration;
- (void)dealloc;
- (id)init;
- (id)operationConfiguration;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setOperationConfiguration:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setVouchers:(id)arg1;
- (id)vouchers;

@end