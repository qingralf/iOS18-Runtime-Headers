/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {
    id  _incrementingIVGeneratorInternal;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *messageID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generateIVWithLength:(long long)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithMessageID:(id)arg1;
- (id)initWithRandomMessageID;
- (id)messageID;
- (void)setMessageID:(id)arg1;

@end
