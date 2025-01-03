/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload> {
    NSData * _dataPayload;
    NSURL * _serverID;
    NSString * _syncKey;
}

@property (nonatomic, readonly) NSArray *childrenOrder; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSData *dataPayload;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *destinationURL; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *serverID;
@property (nonatomic, retain) NSURL *sourceURL; /* unknown property attribute: ? */
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *syncKey;

- (void).cxx_destruct;
- (id)dataPayload;
- (id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (id)syncKey;

@end
