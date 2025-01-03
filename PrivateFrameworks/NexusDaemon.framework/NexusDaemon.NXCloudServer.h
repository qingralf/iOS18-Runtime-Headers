/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NexusDaemon.framework/NexusDaemon
 */

@interface NexusDaemon.NXCloudServer : NSObject <IDSServiceDelegate> {
    void _daemon;
    void _dispatchQueue;
    void _environment;
    void _idsServiceIDs;
    void _idsServices;
    void _sessions;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4;

@end
