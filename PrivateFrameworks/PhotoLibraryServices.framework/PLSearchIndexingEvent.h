/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexingEvent : NSObject {
    unsigned long long  _deletionCount;
    unsigned long long  _donationCount;
    NSError * _error;
    NSString * _sampleIdentifier;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) unsigned long long deletionCount;
@property (nonatomic, readonly) unsigned long long donationCount;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *sampleIdentifier;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)autoBugCaptureEventDictionary;
- (unsigned long long)deletionCount;
- (id)description;
- (unsigned long long)donationCount;
- (id)error;
- (id)initWithDonationCount:(unsigned long long)arg1 deletionCount:(unsigned long long)arg2 timestamp:(id)arg3 sampleIdentifier:(id)arg4;
- (id)initWithError:(id)arg1;
- (id)sampleIdentifier;
- (id)timestamp;

@end