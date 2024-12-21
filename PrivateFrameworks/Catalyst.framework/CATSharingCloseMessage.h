/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSharingCloseMessage : NSObject <CATSharingContentMessage> {
    NSError * _closeError;
}

@property (nonatomic, readonly) NSError *closeError;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long messageType;
@property (readonly) Class superclass;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)closeError;
- (id)dictionaryValue;
- (id)initWithError:(id)arg1;
- (long long)messageType;

@end