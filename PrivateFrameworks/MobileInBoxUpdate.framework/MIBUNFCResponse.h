/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileInBoxUpdate.framework/MobileInBoxUpdate
 */

@interface MIBUNFCResponse : NSObject {
    NSError * _error;
    bool  _rejected;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool rejected;

- (void).cxx_destruct;
- (bool)_deserialize:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithResponsePayload:(id)arg1;
- (bool)rejected;
- (id)serialize;
- (void)setError:(id)arg1;
- (void)setRejected:(bool)arg1;

@end