/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecureTransactionService.framework/SecureTransactionService
 */

@interface STSTapToProvisionAppletData : NSObject {
    NSArray * _supportedPNOs;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSArray *supportedPNOs;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)fromOR:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVersion:(id)arg1;
- (id)initWithVersion:(id)arg1 supportedPNOs:(id)arg2;
- (id)supportedPNOs;
- (id)version;

@end
