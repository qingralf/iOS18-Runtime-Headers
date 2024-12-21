/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDynamicLibraryContainer : NSObject {
    NSData * _airData;
    unsigned long long  _airOffset;
    unsigned long long  _airSize;
    int  _airVersion;
    unsigned long long  _bitcodeOffset;
    unsigned long long  _bitcodeSize;
    MTLDebugInstrumentationData * _debugInstrumentationData;
    <MTLDevice> * _device;
    NSArray * _exportedFunctions;
    NSArray * _exportedVariables;
    MTLLoadedFile * _fileMapping;
    NSArray * _importedLibraries;
    NSArray * _importedSymbols;
    NSString * _installName;
    struct { 
        unsigned char key[32]; 
    }  _libraryUUID;
    NSObject<OS_dispatch_data> * _reflectionData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reflectionDataLock;
    unsigned long long  _reflectionOffset;
    unsigned long long  _reflectionSize;
    NSObject<OS_dispatch_data> * _vendorData;
}

- (id)airData;
- (void)dealloc;
- (void)initReflectionData;
- (id)initWithLibrary:(void*)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (id)reflectionData;
- (oneway void)release;
- (bool)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end