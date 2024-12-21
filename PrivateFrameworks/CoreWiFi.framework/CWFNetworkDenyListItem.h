/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFNetworkDenyListItem : NSObject {
    NSMutableArray * _denyListMetrics;
    NSMutableArray * _denyListTriggers;
    bool  _enterprisePolicy;
    CWFScanResult * _scanResultForNetworkDenyListItem;
    NSMutableArray * _statesCurrent;
    NSMutableArray * _statesHistory;
}

@property (retain) NSMutableArray *denyListTriggers;
@property bool enterprisePolicy;
@property (retain) CWFScanResult *scanResultForNetworkDenyListItem;
@property (retain) NSMutableArray *statesCurrent;
@property (retain) NSMutableArray *statesHistory;

- (void).cxx_destruct;
- (id)_copyCreateDenyListState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (void)addDenyListState:(unsigned long long)arg1 reason:(unsigned long long)arg2 reasonData:(long long)arg3;
- (void)addDenyListStateHistory:(id)arg1 state:(unsigned long long)arg2 reason:(unsigned long long)arg3 reasonData:(long long)arg4;
- (void)addDenyListTrigger:(unsigned long long)arg1 reasonData:(long long)arg2 BSSID:(id)arg3;
- (bool)containsNetwork:(id)arg1;
- (void)dealloc;
- (id)denyListTriggers;
- (bool)enterprisePolicy;
- (bool)hasDenyListState:(unsigned long long)arg1;
- (id)initWithDenyListNetwork:(id)arg1;
- (bool)isEqualToDenyListScanResult:(id)arg1;
- (void)processDenyListStateMetric:(id)arg1 denyListRemove:(bool)arg2 denyListRemoveReason:(unsigned long long)arg3;
- (void)processDenyListedBSSForMetrics;
- (id)scanResultForNetworkDenyListItem;
- (void)setDenyListTriggers:(id)arg1;
- (void)setEnterprisePolicy:(bool)arg1;
- (void)setScanResultForNetworkDenyListItem:(id)arg1;
- (void)setStatesCurrent:(id)arg1;
- (void)setStatesHistory:(id)arg1;
- (id)statesCurrent;
- (id)statesHistory;
- (bool)updateNetwork:(id)arg1;

@end