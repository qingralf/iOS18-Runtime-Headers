/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentSelectionInfo : NSObject {
    unsigned long long  _currentModeType;
    NSUUID * _preferredResidentIDSIdentifier;
    NSDate * _selectionTimestamp;
}

@property (readonly) unsigned long long currentModeType;
@property (retain) NSUUID *preferredResidentIDSIdentifier;
@property (readonly) NSDate *selectionTimestamp;

- (void).cxx_destruct;
- (unsigned long long)currentModeType;
- (id)description;
- (id)initWithPreferredResidentIDSIdentifier:(id)arg1 currentResidentSelectionModeType:(unsigned long long)arg2 selectionTimestamp:(id)arg3;
- (id)initWithPreferredResidentIDSIdentifier:(id)arg1 selectionTimestamp:(id)arg2;
- (id)preferredResidentIDSIdentifier;
- (id)selectionTimestamp;
- (void)setPreferredResidentIDSIdentifier:(id)arg1;

@end
