#include "pch.h"

#include <MC/ServerCommandOrigin.hpp>
#include <MC/TeleportComponent.hpp>
#include <MC/BlockVolume.hpp>
#include <MC/OverworldGenerator.hpp>
THook(void, "?_prepareHeights@OverworldGeneratorMultinoise@@EEAAXAEAVBlockVolume@@AEBVChunkPos@@AEBVWorldGenCache@@PEAVAquifer@@$$QEAV?$function@$$A6AXAEBVBlockPos@@AEBVBlock@@H@Z@std@@_NPEAV?$vector@FV?$allocator@F@std@@@7@H@Z"
	, ServerCommandOrigin* a1,
	BlockVolume* a2,
	unsigned long long* a3,
	int a4,
	TeleportComponent* a5,
	__int64 a6,
	char a7,
	void** a8) {
	return;
}


THook(void, "?_prepareHeights@NetherGenerator@@AEAAXAEAVBlockVolume@@AEBVChunkPos@@_NPEAV?$vector@FV?$allocator@F@std@@@std@@H@Z",
	ServerCommandOrigin* _this,
	BlockVolume* a2,
	struct ChunkPos* a3,
	__int64 a4,
	__int64 a5) {
	return;
}

THook(void, "?placeBedrockFloor@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z",
	void* a1,
	struct Random* a2,
	struct BlockVolume* a3,
	const struct BlockPos* a4) {
	return;
}

THook(void, "?placeBedrockCeiling@Utils@VanillaSurfaceBuilders@@YAXAEAVRandom@@AEAVBlockVolume@@AEBVBlockPos@@@Z"
	, void* _this,
	struct Random* a2,
	struct BlockVolume* a3,
	const struct BlockPos* a4) {
	return ;
}

THook(void, "?buildSurfaceAt@OceanFrozenSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z",
	void* _this,
	ISurfaceBuilder::BuildParameters* a2) {
	return;
}

#include <MC/IcebergFeature.hpp>
THook(void, "?generateIcebergBlock@IcebergFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHHHHH_N3MHAEBVBlock@@@Z",
	IcebergFeature* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BlockPos* a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int a9,
	int a10,
	bool a11,
	bool a12,
	float a13,
	int a14,
	const struct Block* a15) {
	//logger.info(a4->toString());
	return;
}

#include <MC/OceanRuinStart.hpp>
#include <MC/Dimension.hpp>
THook(void, "?createRuin@OceanRuinStart@@QEAAXAEAVDimension@@AEAVOverworldGenerator@@AEAVRandom@@HH@Z",
	OceanRuinStart* _this,
	Dimension* a2,
	struct OverworldGenerator* a3,
	struct Random* a4,
	int a5,
	int a6) {
	return;
}

//#include <MC/ShipwreckStart.hpp>
//THook(void, "?createStructureStart@ShipwreckFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z",
//	__int64 a1,
//	ShipwreckStart** a2,
//	__int64 a3,
//	const struct BiomeSource* a4,
//	struct Random* a5,
//	__int64 a6) {
//	return;
//}

#include <MC/FossilFeature.hpp>
THook(char, "?place@FossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z",
	FossilFeature* _this,
	struct BlockSource* a2,
	const struct BlockPos* a3,
	struct Random* a4) {
	return true;
}

#include <MC/NetherFossilFeature.hpp>
THook(long long, "?place@NetherFossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z",
	NetherFossilFeature* _this,
	struct BlockSource* a2,
	const struct BlockPos* a3,
	struct Random* a4) {
	return true;
}

#include <MC/ShipwreckFeature.hpp>
THook(bool, "?isFeatureChunk@ShipwreckFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	ShipwreckFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

THook(void, "?buildSurfaceAt@MesaSurfaceBuilder@VanillaSurfaceBuilders@@UEBAXAEBUBuildParameters@ISurfaceBuilder@@@Z",
	void* _this,
	const struct ISurfaceBuilder::BuildParameters* a2) {
	return;
}

#include <MC/VillageFeature.hpp>
THook(bool, "?isFeatureChunk@VillageFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	VillageFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <MC/OceanMonumentFeature.hpp>
THook(bool, "?isFeatureChunk@OceanMonumentFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	OceanMonumentFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <MC/JunglePyramidPiece.hpp>
THook(bool, "?postProcess@JunglePyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z",
	JunglePyramidPiece* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BoundingBox* a4) {
	return false;
}

#include <MC/DesertPyramidPiece.hpp>
THook(bool, "?postProcess@DesertPyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z",
	DesertPyramidPiece* _this,
	struct BlockSource* a2,
	struct Random* a3,
	const struct BoundingBox* a4) {
	return false;
}

#include <MC/PillagerOutpostFeature.hpp>
THook(bool, "?isFeatureChunk@PillagerOutpostFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	PillagerOutpostFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <MC/StrongholdFeature.hpp>
THook(bool, "?isFeatureChunk@StrongholdFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	StrongholdFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}

#include <MC/WoodlandMansionFeature.hpp>
THook(bool, "?isFeatureChunk@WoodlandMansionFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@@Z",
	WoodlandMansionFeature* _this,
	const struct BiomeSource* a2,
	struct Random* a3,
	const struct ChunkPos* a4,
	unsigned int a5,
	const struct IPreliminarySurfaceProvider* a6) {
	return false;
}
//
//THook(void, "?createMansion@MansionPiecePlacer@WoodlandMansionPieces@@QEAAXAEBVBlockPos@@W4Rotation@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVMansionGrid@2@@Z",
//	__int64 a1,
//	unsigned long long* a2,
//	unsigned __int8 a3,
//	__int64 a4,
//	__int64 a5) {
//	return;
//}