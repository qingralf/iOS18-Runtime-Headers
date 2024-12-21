/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADPooledDatabaseConfiguration : NSObject {
    NSString * _clientIdentifier;
    NSString * _clientName;
    bool  _enablePropertyModificationLogging;
    int  _inMemoryChangeTrackingClientID;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic) bool enablePropertyModificationLogging;
@property (nonatomic) int inMemoryChangeTrackingClientID;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)clientName;
- (bool)enablePropertyModificationLogging;
- (int)inMemoryChangeTrackingClientID;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setEnablePropertyModificationLogging:(bool)arg1;
- (void)setInMemoryChangeTrackingClientID:(int)arg1;

@end