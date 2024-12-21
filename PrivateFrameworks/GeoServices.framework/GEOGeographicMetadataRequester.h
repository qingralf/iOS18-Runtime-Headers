/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeographicMetadataRequester : NSObject {
    id /* block */  _completionBlock;
    <GEOGeographicMetadataRequesterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _delegateSupportsErrors;
    bool  _delegateSupportsNoChange;
    bool  _delegateSupportsSkipNotifications;
    <GEOGeographicMetadataFetcher> * _fetcher;
    bool  _isRunning;
    geo_isolater * _isolater;
    NSError * _lastError;
    NSSet * _lastUsedTileKeysMaxZoom;
    NSSet * _lastUsedTileKeysMinZoom;
    GEOLocation * _location;
    GEOLocation * _nextLocation;
    id /* block */  _processBlock;
    id /* block */  _responseTerritoryBlock;
    unsigned long long  _retryCounter;
    unsigned long long  _type;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) GEOLocation *location;
@property (nonatomic, readonly) unsigned short mcc;
@property (nonatomic, readonly) unsigned long long metadataType;
@property (nonatomic, readonly) unsigned short mnc;

+ (void)_fetchPossibleTerritoriesForLocation:(id)arg1 retryCount:(unsigned long long)arg2 responseQueue:(id)arg3 responseBlock:(id /* block */)arg4;
+ (void)fetchDataForLocation:(id)arg1 type:(unsigned long long)arg2 responseQueue:(id)arg3 responseBlock:(id /* block */)arg4;
+ (void)fetchPossibleTerritoriesForLocation:(id)arg1 responseQueue:(id)arg2 responseBlock:(id /* block */)arg3;
+ (void)fetchSmartDataModeDataForLocation:(id)arg1 mcc:(unsigned short)arg2 mnc:(unsigned short)arg3 responseQueue:(id)arg4 responseBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_doSimpleLookup:(id)arg1 rootQuadKey:(unsigned long long)arg2 error:(id*)arg3;
- (id)_doTerritoryRegulatoryLookup:(id)arg1 error:(id*)arg2;
- (void)_fetch;
- (void)_fetchData:(id /* block */)arg1;
- (void)_fetchTerritories:(id /* block */)arg1;
- (void)_processResponse:(id)arg1 error:(id)arg2;
- (void)_processTerritories:(id)arg1 error:(id)arg2;
- (id)initSmartDataModeDataWithMcc:(unsigned short)arg1 mnc:(unsigned short)arg2 delegateQueue:(id)arg3 delegate:(id)arg4;
- (id)initWithDataType:(unsigned long long)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (id)initWithType:(unsigned long long)arg1 mcc:(unsigned short)arg2 mnc:(unsigned short)arg3 queue:(id)arg4 delegate:(id)arg5 territoryBlock:(id /* block */)arg6;
- (id)location;
- (unsigned short)mcc;
- (unsigned long long)metadataType;
- (unsigned short)mnc;
- (void)reportCorrupt:(id)arg1;
- (void)setLocation:(id)arg1;

@end