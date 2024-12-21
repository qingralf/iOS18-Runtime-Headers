/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentSelectionStatusKit : NSObject <HMFLogging> {
    <HMDResidentDeviceManagerContext> * _context;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _residentIDSIdentifierToLocationMap;
    NSSet * _residentStatusList;
    HMDResidentSelectionInfo * _selectionInfo;
    NSArray * _sortedResidentStatuses;
    HMDResidentStatus * _sourceForPreferredResidentsList;
    NSSet * _wiredResidentIDSIdentifiers;
}

@property (nonatomic, readonly) <HMDResidentDeviceManagerContext> *context;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) HMDResidentDevice *elector;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDPreferredResidentsList *preferredResidentsList;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSDictionary *residentIDSIdentifierToLocationMap;
@property (nonatomic, readonly) NSSet *residentStatusList;
@property (nonatomic, readonly) HMDResidentSelectionInfo *selectionInfo;
@property (nonatomic, readonly) NSArray *sortedResidentStatuses;
@property (nonatomic, readonly) HMDResidentStatus *sourceForPreferredResidentsList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *wiredResidentIDSIdentifiers;

+ (id)logCategory;

- (void).cxx_destruct;
- (id /* block */)comparatorForPreferredResidentsListSource;
- (id)context;
- (id)elector;
- (id)initWithWithContext:(id)arg1 residentStatusList:(id)arg2;
- (id)logIdentifier;
- (id)preferredResidentsList;
- (id)queue;
- (id)residentIDSIdentifierToLocationMap;
- (id)residentIDSIdentifierToLocationMapFrom:(id)arg1;
- (id)residentStatusList;
- (id)residentStatusWithValidPreferredResidentsListIn:(id)arg1;
- (id)selectionInfo;
- (id)selectionInfoWithLatestTimestampIn:(id)arg1;
- (id)sortResidentStatuses:(id)arg1;
- (id)sortedResidentStatuses;
- (id)sourceForPreferredResidentsList;
- (id)wiredResidentIDSIdentifiers;
- (id)wiredResidentIDSIdentifiersIn:(id)arg1;

@end