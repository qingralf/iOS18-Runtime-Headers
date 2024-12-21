/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriverTransports_IOA2.framework/AudioServerDriverTransports_IOA2
 */

@interface ASDTIOA2BlockControl : ASDControl <ASDTIOA2Control> {
    char * _blockMap;
    unsigned int  _blockSize;
    ASDTIOA2Device * _ioa2Device;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    bool  _settable;
    unsigned int  _userClientID;
    bool  marked;
    NSArray * properties;
}

@property (nonatomic) char *blockMap;
@property (nonatomic) unsigned int blockSize;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) bool marked;
@property (nonatomic, retain) NSArray *properties;
@property (nonatomic, readonly) NSArray *propertySelectorInfo;
@property (nonatomic) bool settable;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int userClientID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (char *)blockMap;
- (unsigned int)blockSize;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)initWithIOA2Device:(id)arg1 userClientID:(unsigned int)arg2 isSettable:(bool)arg3 forElement:(unsigned int)arg4 inScope:(unsigned int)arg5 objectClassID:(unsigned int)arg6;
- (id)ioa2Device;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (bool)marked;
- (id)properties;
- (id)propertySelectorInfo;
- (void)pushValue:(unsigned int)arg1;
- (void)setBlockMap:(char *)arg1;
- (void)setBlockSize:(unsigned int)arg1;
- (void)setIoa2Device:(id)arg1;
- (void)setMarked:(bool)arg1;
- (void)setProperties:(id)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setSettable:(bool)arg1;
- (void)setUserClientID:(unsigned int)arg1;
- (bool)settable;
- (bool)synchronizeWithRegistryDictionary:(id)arg1;
- (unsigned int)userClientID;

@end