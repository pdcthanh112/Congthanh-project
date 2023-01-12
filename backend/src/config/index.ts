import { config } from 'dotenv';
config({ path: `.env.${process.env.NODE_ENV || 'development'}.local` });

export const CREDENTIALS = process.env.CREDENTIALS === 'true';
export const {
  NODE_ENV,
  PORT,
  DB_HOST,
  DB_PORT,
  DB_USER,
  DB_PASSWORD,
  DB_DATABASE,
  ALGORITHM,
  ACCESS_TOKEN_SECRET_KEY,
  REFRESH_TOKEN_SECRET_KEY,
  SALT_ROUNDS,
  ACCESS_TOKEN_EXPIRES_IN,
  REFRESH_TOKEN_EXPIRES_IN,
  LOG_FORMAT,
  LOG_DIR,
  ORIGIN
} = process.env;
