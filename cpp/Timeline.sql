/* This file was generated by ODB, object-relational mapping (ORM)
 * compiler for C++.
 */

DROP TABLE IF EXISTS "timeline_timeline_items" CASCADE;

DROP TABLE IF EXISTS "timeline" CASCADE;

CREATE TABLE "timeline" (
  "id" BIGSERIAL NOT NULL PRIMARY KEY,
  "colour_one" VARCHAR(128) NOT NULL,
  "colour_two" VARCHAR(128) NOT NULL,
  "colour_three" VARCHAR(128) NOT NULL,
  "label_one" VARCHAR(128) NOT NULL,
  "label_two" VARCHAR(128) NOT NULL,
  "label_three" VARCHAR(128) NOT NULL);

CREATE TABLE "timeline_timeline_items" (
  "object_id" BIGINT NOT NULL,
  "index" BIGINT NOT NULL,
  "value" BIGINT NULL,
  CONSTRAINT "object_id_fk"
    FOREIGN KEY ("object_id")
    REFERENCES "timeline" ("id")
    ON DELETE CASCADE);

CREATE INDEX "timeline_timeline_items_object_id_i"
  ON "timeline_timeline_items" ("object_id");

CREATE INDEX "timeline_timeline_items_index_i"
  ON "timeline_timeline_items" ("index");

ALTER TABLE "timeline_timeline_items"
  ADD CONSTRAINT "value_fk"
    FOREIGN KEY ("value")
    REFERENCES "timelineitem" ("id")
    INITIALLY DEFERRED;

