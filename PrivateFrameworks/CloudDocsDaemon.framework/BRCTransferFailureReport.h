/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTransferFailureReport : NSObject {
    NSError * _error;
    NSDate * _lastFailureDate;
    NSMutableDictionary * _privateDBErrorCountByPCSAndEDPState;
    NSMutableDictionary * _shareDBErrorCountByPCSAndEDPState;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *lastFailureDate;
@property (nonatomic, readonly) NSDictionary *privateDBErrorCountByPCSAndEDPState;
@property (nonatomic, readonly) NSDictionary *shareDBErrorCountByPCSAndEDPState;

- (void).cxx_destruct;
- (id)description;
- (void)encounteredErrorWithPCSState:(unsigned int)arg1 enhancedDrivePrivacyEnabled:(bool)arg2 privateDB:(bool)arg3 atDate:(id)arg4;
- (void)encounteredErrors:(unsigned long long)arg1 atDate:(id)arg2;
- (id)error;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTransferFailureReport:(id)arg1;
- (id)lastFailureDate;
- (id)privateDBErrorCountByPCSAndEDPState;
- (void)setLastFailureDate:(id)arg1;
- (id)shareDBErrorCountByPCSAndEDPState;

@end
